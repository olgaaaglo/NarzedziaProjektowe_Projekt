pipeline {
  agent {
    dockerfile {
      filename 'Dockerfile'
    }

  }
  stages {
    stage('Test') {
      steps {
        sh 'cd Test'
        sh 'g++ test_add.cpp -lgtest -lgtest_main -lgmock -pthread -o test_add'
      }
    }

    stage('Deliver') {
      steps {
        sh 'g++ app.cpp -o app'
        sh './app'
      }
    }

  }
}
