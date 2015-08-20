<?php

	class ViewList extends View {
		private $modV;
		
		public function __construct($mod) {
			$this->modV = $mod;
		}
	
		public function displayList() {

			echo("<ul>");

			foreach($this->modV->getList() as $line) {
				echo("<li>".$line->getDesignation()."</li>");
			}

			echo("</ul>");
		
		}
	
	}


?>