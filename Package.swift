import PackageDescription

let package = Package(
  name: "CSQLite3",

  // pkgConfig: "sqlite3",
	
  providers: [
    .Brew("sqlite3"),
    .Apt("sqlite3-dev")
  ],	
	
  exclude: [
    "README.md",
    "LICENSE"
  ]
)
