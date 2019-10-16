<?php
$z[0]=Array("field","",420,439);
$z[0][4]['name']="title";
$z[1]=Array("global","",440,466);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",507,536);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",576,634);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",3327,3362);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",3912,3934);
$z[5][4]['name']="typename";
$z[6]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",4715,5099);
$z[6][4]['name']="typeid";
$z[6][4]['runphp']="yes";
$z[7]=Array("channel","\r\n            <li><a href=\"[field:typeurl/]\" target=\"\">[field:typename/]</a><i></i></li>\r\n            ",5324,5542);
$z[7][4]['type']="son";
$z[7][4]['currentstyle']="<li class='current'><a href='~typelink~'>~typename~</a></li>";
$z[8]=Array("list","\r\n                    <li class='col-4-1 not-animated' data-animate='fadeInUp'>\r\n                      <div class=\"portfolio-img\"><a href=\"[field:litpic/]\" rel=\"imgZoom-group-252120\" title=\"[field:title/]\"><img src=\"[field:litpic/]\" alt=\"[field:title/]\"/><span class=\"opacity-overlay\"><i class=\"icon-zoom\"></i></span></a></div>\r\n                      <div class=\"portfolio-title\">\r\n                        <h2><a href=\"images/1-1610201K6390-L.jpg\" rel=\"imgZoom-group-title-252120\" title=\"[field:title/]\">[field:title/]</a></h2>\r\n                      </div>\r\n                    </li>\r\n                    ",6084,6741);
$z[8][4]['pagesize']="20";
$z[8][4]['titlelen']="36";
$z[9]=Array("pagelist","",7375,7441);
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[9][4]['listsize']="5";
$z[10]=Array("include","",7579,7614);
$z[10][4]['filename']="foot.htm";

?>