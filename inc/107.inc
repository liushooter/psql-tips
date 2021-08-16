    <div class="tip">
	  You can pass the name of the columns to use as Vertical and Horizontal
	  headers to the <code>\crosstabview</code> meta-command.
      <pre><code class="hljs bash">laetitia=> select * from music ;
        artist         |       album       | year 
-----------------------+-------------------+------
 Foo Fighters          | Concrete and Gold | 2017
 Red Hot Chili Peppers | The Getaway       | 2016
 Green Day             | ¡Uno!             | 2012
(3 rows)

laetitia=> laetitia=> \crosstabview artist year
        artist         |       2017        |    2016     | 2012  
-----------------------+-------------------+-------------+-------
 Foo Fighters          | Concrete and Gold |             | 
 Red Hot Chili Peppers |                   | The Getaway | 
 Green Day             |                   |             | ¡Uno!
(3 rows)</code></pre>This feature is available
since Postgres 9.6.
	</div>
