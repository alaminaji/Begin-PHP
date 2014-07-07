<?php

  echo "Github";
  $var = "Git";
  echo $var; //this is comment
  
  $arr = array("satu", "dua", "tiga", "empat", "lima");
  foreach($arr as $prnt)
  {
    echo $prnt . "<br>";
  }
  
  if(print_r($arr))
  {
    //this is weird
  }
  
  function tampil()
	{
		echo 'aji';
		return 'santoso';
	}

	echo htmlspecialchars(tampil());
	echo '<br><br>';

	if (tampil() == 'santoso') {
		# code...
		echo 'berarti benar kayak c++';
		echo "<br>";
	}
	function tampilParam($depan, $belakang)
	{
		return $depan . $belakang;
	}

	echo htmlspecialchars(tampilParam('aji','santoso'));

	echo '<br><br>';
?>
