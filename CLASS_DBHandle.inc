<?php

	class DBHandle {
		private $db;
	
		public function __construct() {
		
			try {
				$this->db = new PDO('mysql: host=localhost; dbname=MVCMarket', "root", "root");
			} catch(PDOException $e) {
			    echo 'Échec lors de la connexion : ' . $e->getMessage();
    		}
    		
		}
		
		public function getData() {
			$res = array();
			
			$req = $this->db->prepare("select * from produits");
			$req->execute();
			
			
			while($prod = $req->fetchObject('Produit')) {
				$res[] = $prod;
			}
			
			return $res;
		}
	
	
	}

?>