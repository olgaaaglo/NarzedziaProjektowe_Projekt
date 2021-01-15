pipeline {
  agent {
    dockerfile {
      filename 'Dockerfile'
    }

  }
  stages {
    stage('Test') {
      steps {
        sh ''' '''
      }
    }

    stage('Deliver') {
      steps {
        sh '''g++ app.cpp -o app
        ./app'''
      }
    }

  }
}
