// swift-tools-version:4.2
import PackageDescription

let package = Package(
    name: "CSQLite3",
    products: [
        .library(name: "CSQLite3", targets: ["CSQLite3"]),
    ],
    targets: [
        .systemLibrary(name: "CSQLite3")
    ]
)
