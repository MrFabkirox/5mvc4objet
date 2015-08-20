<?php

	class Produit {
	
		private $id;
		private $Designation;
		private $prix;
	
		public function getId() {
			return $this->id;
		}
	
		public function getDesignation() {
			return $this->Designation;
							echo("!Produit getDesignation!");
		}
	
		public function getPrix() {
			return $this->prix;
		}

	}


?>