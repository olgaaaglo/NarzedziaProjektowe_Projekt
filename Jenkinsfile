pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
      echo 'Building image'
      script {
        docker.build("${imageName}")
    }
    }
    }
    stage('Test') {
      agent {
       docker {
          image "${imageName}"
        } 
      }
      steps {
        sh ''' '''
      }
    }

    stage('Deliver') {
      agent {
        docker {
          image "${imageName}"
        }
      }
      steps {
        sh '''g++ app.cpp -o app
        ./app'''
      }
    }
      stage('Deploy') {
      agent any
      steps {
        script {
          docker.withRegistry('', "${registryCredential}"){
            imageToDeploy = docker.image("${imageName}")
            imageToDeploy.push()
            echo "Image pushed to Dockerhub"
          }
        }

      }
    }

    stage('Cleaning') {
      steps {
        sh 'docker image prune'
      }
    }

  }
  environment {
    registry = 'olgaaaglo/app'
    registryCredential = 'dockerhub'
    imageName = "${registry}:${env.BUILD_ID}"

  }
}
