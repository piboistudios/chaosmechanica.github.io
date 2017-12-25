import dat.Data;

class Test {
	static var data = dat.Data;
	static function main() {
		#if js
		data.load(null);
		#else
		data.load(haxe.Resource.getString("test.cdb"));
		#end
		
		
		data
		
	
}