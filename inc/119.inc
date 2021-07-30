    <div class="tip"> While <code>\echo</code> will send the result in the standard output,
	use <code>\qecho</code> if you'd like the result to be written inside a file you
	specified using the <code>\o</code> metacommand.
      <pre><code class="hljs bash">laetitia=# \o /tmp/output.out
laetitia=# \echo <code>date</code>
Fri Jul 30 10:23:58 CEST 2021
laetitia=# \! cat /tmp/output.out
laetitia=# \qecho <code>date</code>
laetitia=# \! cat /tmp/output.out
Fri Jul 30 10:24:25 CEST 2021</code></pre>This feature is available
since at least Postgres 7.1.
	</div>
