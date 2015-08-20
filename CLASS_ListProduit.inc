<?php

	class ListProduit {
		private $list = array();
		private $vue = array();
		
		public function __construct() {
		
			$db = new DBHandle();
			$this->list = $db->getData();
			
			$this->vue[] = new ViewList($this);
			$this->vue[] = new ViewTable($this);
		}
		
		public function showList($mod) {
		
			$this->vue[$mod]->displayList();

		}
		
		public function getList() {
			return $this->list;
		}
		
		
	}

?>