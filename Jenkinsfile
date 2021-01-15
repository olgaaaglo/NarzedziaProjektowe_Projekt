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
        wget http://www.cmake.org/files/v2.8/cmake-2.8.3.tar.gz
        tar xzf cmake-2.8.3.tar.gz
        cd cmake-2.8.3
        ./configure --prefix=/opt/cmake
        make
        make install
        cd ../
        mkdir googletest
        cd googletest
        git clone https://github.com/google/googletest.git
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
