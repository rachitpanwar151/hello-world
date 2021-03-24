<!DOCTYPE html>
<html>
<head>
<title>COVID-19 TRACKING SYSTEM

<?php include 'link/links.php'; ?></title>
</head>
<body  onload="fetch()">
<div class="container"><br>
<div class="card">
<div class="card-header" style="background-color:#34495E;">
<div class="row">
<div class="col-md-3">
<img src="img/imm.png" height="120px">
</div>
<div class="col-md-5"><h3 style="color: white;lineheight:100px;"><marquee>COVID-19 TRACKING SYSTEM</marquee></h3></div>
<div class="col-md-4" style="text-align: right;"><br><br>

<a href="form.php" style="color: white;textdecoration: none;font-weight:bold;">fill your detail</a>
</div>
</div>
</div>
<div class="card-body" style="background-color:#CACFD2;">
<marquee><img src="img/logo.png" height="220px"> <img src="img/people.png" height="220px"></marquee>

<center><h2><span>Coronavirus Cases:<br>
124,859,833<br>
view by country<br>
Deaths:<br>
2,747,609<br>
Recovered:<br>
100,880,783

</span></h2></center>

<section class="corona_update container-fluid">
	
	<div class="mb-3">
		<h3 class="text-center text-uppercase"> covid-19 updates</h3>
	</div>
</section>



<div class="table-responsive">
	<table class=" table table-bordered table-striped text-center " id="tbval">
		
		<tr>
			
<th>country</th>
<th>total confirmed case</th>
<th>total recovered case</th>
<th>total death</th>
<th>new recovered</th>
<th>new death</th>


		</tr>
	</table>
</div>


<p><h1 style="color: #34495E;">Welcome tO COVID-19 TRACKING SYSTEM></p><br>
<p>Coronavirus disease 2019 (COVID-19) is a contagious disease caused by severe acute respiratory syndrome coronavirus 2 (SARS-CoV-2). The first case was identified in Wuhan, China, in December 2019. The disease has since spread worldwide, leading to an ongoing pandemic.Symptoms of COVID-19 are variable, but often include fever, cough, fatigue, breathing difficulties, and loss of smell and taste. Symptoms begin one to fourteen days after exposure to the virus. Of those people who develop noticeable symptoms, most (81%) develop mild to moderate symptoms (up to mild pneumonia), while 14% develop severe symptoms (dyspnea, hypoxia, or more than 50% lung involvement on imaging), and 5% suffer critical symptoms (respiratory failure, shock, or multiorgan dysfunction). Older people are more likely to have severe symptoms. At least a third of the people who are infected with the virus remain asymptomatic and do not develop noticeable symptoms at any point in time, but they still can spread the disease. Around 20% of those people will remain asymptomatic throughout infection, and the rest will develop symptoms later on, becoming pre-symptomatic rather than asymptomatic and therefore having a higher risk of transmitting the virus to others.

</p>
<marquee> <img src="img/who.png" height="400px"></marquee>

<script> 
	function fetch(){


$.get("https://api.covid19api.com/summary", function(data{
	//console.log(data['Countries'].length)

varb tbval = document.getElementById('tbval');

      for ( var i = 1; i <(data['Countries'].length); i++) {
      	var x= tbval.insertRow();
      	x.insertCell(0);


tbval.row[i].cells[0].innerHTML = data['Countries'][i-1]['Country'];
tbval.rows[i].cells[0].style.background='#7a4a91';
tbval.rows[i].cells[0].style.color='#fff';



x.insertCell(1);
tbval.row[i].cells[1].innerHTML = data['Countries'][i-1]['TotalConfirmed'];
tbval.rows[i].cells[1].style.background='#7a4a91';

x.insertCell(2);
tbval.row[i].cells[2].innerHTML = data['Countries'][i-1]['TotalRecovered'];
tbval.rows[i].cells[2].style.background='#4bb7d8';

x.insertCell(3);
tbval.row[i].cells[3].innerHTML = data['Countries'][i-1]['TotalDeath'];
tbval.rows[i].cells[3].style.background='#f36e23';

x.insertCell(4);
tbval.row[i].cells[4].innerHTML = data['Countries'][i-1]['NewConfirmed'];
tbval.rows[i].cells[4].style.background='#4bb7d8';

x.insertCell(5);
tbval.row[i].cells[5].innerHTML = data['Countries'][i-1]['NewRecovery'];
tbval.rows[i].cells[5].style.background='#9cc850';

x.insertCell(6);
tbval.row[i].cells[6].innerHTML = data['Countries'][i-1]['NewDeath'];
tbval.rows[i].cells[6].style.background='#f36e23';


 }
       );
	}
</script>



<div class="container scrolltop float-right pr-5">
	<i class="fa fa-arrow-up" onclick="topfunction()" id="mybtn"></i>
</div>
<div class="card-footer" style="background-color:#34495E; color: white; textalign: center; font-weight: bold;"><center>software copy&copy;rights by rachit panwar</center></div>
</div>
</div>
</body>
</html>