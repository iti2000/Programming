<?php
$servername = "localhost";
$username = "	id12021648_root";
$password = "itipatel";
$dbname = "id12021648_test";


$name = $_GET['name'];
$lname = $_GET['lname'];
$email = $_GET['email'];
$pass = $_GET['pass'];

// Create connection
$conn = mysqli_connect($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$sql = "INSERT INTO `iti` (`ID`, `NAME`, `LASTNAME`, `EMAIL`,`PASSWORD`) VALUES ( NULL, '$name', '$lname', '$email','$pass')";


if ($conn->query($sql) === TRUE) {
    echo "New record created successfully";
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}

$conn->close();
?>
