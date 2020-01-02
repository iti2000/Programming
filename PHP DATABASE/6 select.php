<?php
$servername = "localhost";
$username = "id12021648_root";
$password = "itipatel";
$dbname = "id12021648_test";

$log_email = $_GET['log_email'];
$log_pass = $_GET['log_pass'];

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$sql = "SELECT * FROM iti where EMAIL='$log_email' and PASSWORD='$log_pass'";
$result = $conn->query($sql);

//the function num_rows() checks if there are more than zero rows returned.
if ($result->num_rows > 0) {
    // output data of each row
    //the function fetch_assoc() puts all the results into an associative array that we can loop through.
    while($row = $result->fetch_assoc()) {
      $rearr=array("name"=>$row['NAME'],"lname"=>$row['LASTNAME'],"email"=>$row['EMAIL'],"id"=>$row['ID'],"password"=>$row['PASSWORD']);
      echo json_encode($rearr);
    }
}else {
    echo "ERROR";
}
$conn->close();
?>
