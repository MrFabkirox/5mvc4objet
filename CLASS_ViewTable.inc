<?php

	class ViewTable extends View {
		private $modV;
		
		public function __construct($mod) {
			$this->modV = $mod;
		}
	
		public function displayList() {
			
			echo("<table><tr>");
			
			foreach($this->modV->getList() as $line) {
				echo("<td>".$line->getDesignation()."</td>");
			}
			
			echo("</tr></table>");
			
		}
	
	}
	
?>