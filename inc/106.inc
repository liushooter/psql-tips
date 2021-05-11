    <div class="tip">
      <code>\crosstabview</code> is a meta-command that will create a crosstabview from the
	  query in the current query buffer.
	  By default the first column will become the column header while the second
	  column will become the horizontal header.
	  The data from the third column will fill the table.
	  <pre><code class="hljs bash">laetitia=> select * from music ;
        artist         |       album       | year 
-----------------------+-------------------+------
 Foo Fighters          | Concrete and Gold | 2017
 Red Hot Chili Peppers | The Getaway       | 2016
 Green Day             | ¡Uno!             | 2012
(3 rows)

laetitia=> \crosstabview 
        artist         | Concrete and Gold | The Getaway | ¡Uno! 
-----------------------+-------------------+-------------+-------
 Foo Fighters          |              2017 |             |      
 Red Hot Chili Peppers |                   |        2016 |      
 Green Day             |                   |             |  2012
(3 rows)</code></pre>This feature is available
since Postgres 9.6.
	</div>
