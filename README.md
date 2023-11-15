# Calculator Web Application
## Overview

This project is a simple calculator web application built using C, HTML, WebAssembly, and JavaScript. The application is hosted using a Docker container with an Nginx server.

## Features

- Basic arithmetic operations (addition, subtraction, multiplication, division).
- User-friendly interface accessible through a web browser.
- Efficient computation using WebAssembly.

## Getting Started
Prerequisites
Docker installed on your machine.
Running the Application
Clone the repository:


1. Copy code
```
git clone https://github.com/snekussaurier/c-calculator.git
```

2. Navigate to the project directory:

```
cd c-calculator
```

3. Build the Docker image:

```
docker build -t c-calculator .
```

4. Run the Docker container:

```
docker run -p 8080:80 c-calculator
```

5. Open your web browser and visit http://localhost:8080 to access the calculator.

### Alternative Method:

1. Clone docker container from the github container registry:

```
docker pull ghcr.io/snekussaurier/c-calculator:main
```

2. Run the Docker container:

```
docker run -p 8080:80 c-calculator
```

## Contributing

If you'd like to contribute to the project, please follow these steps:

- Fork the repository.
- Create a new branch for your feature or bug fix: git checkout -b feature-name.
- Make your changes and commit them: git commit -m 'Description of changes'.
- Push to the branch: git push origin feature-name.
- Create a pull request on GitHub.

## License

This project is licensed under the MIT License.

## Acknowledgments

Thanks to Nginx for providing a robust web server.
This project was inspired by a passion for web development and a desire to experiment with C and WebAssembly.
