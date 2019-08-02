@import Foundation;

@interface NSAppleEventDescriptor(Extensions)

+ (NSAppleEventDescriptor *)descriptorWithFilePath:(NSString *)fileName;
+ (NSAppleEventDescriptor *)descriptorWithFileURL:(NSURL *)fileURL;

@end
