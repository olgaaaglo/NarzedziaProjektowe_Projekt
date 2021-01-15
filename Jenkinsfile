pipeline {
  agent {
    dockerfile {
      filename 'Dockerfile'
    }

  }
  stages {
    stage('Test') {
      steps {
        sh '''
        mkdir googletest
        cd googletest
        google clone https://github.com/google/googletest.git
        cd googletest
        mkdir build
        cd build
        cmake ../
        make
        cd ../../Test
        g++ test_add.cpp -lgtest -lgtest_main -lgmock -pthread -o test_add
        ./test_add'''
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
