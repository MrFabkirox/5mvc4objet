<?php

	class ClassLoader {
		public static function loadclass($class) {
			require("CLASS_$class.inc");
		}
	}
	
	spl_autoload_register('ClassLoader::loadclass');

?>

<!DOCTYPE HTML PUBLIC "-//IETF//DTD HTML//EN">
<html> 
<head>

	<meta http-equiv="content-type" content="text/html; charset=utf8" />
	<title>5mvc4objet , index</title>
    <link rel="stylesheet" type="text/css" href="style.css">

</head>
<body>
<script>
</script>

<div id="right"><?php include("menu.php"); ?></div>

<div id="left">

	<h2>5mvc4objet</h2>
	
	<?php
	
		$listProduit = new ListProduit();
		$listProduit->showList(1);
		
	?>

</div>
</body>

</html>