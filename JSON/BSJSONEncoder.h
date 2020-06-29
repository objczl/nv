//
//  BSJSONEncoder.h
//  BSJSONAdditions
//

@import Foundation;

@interface BSJSONEncoder : NSObject
+ (NSString *)jsonStringForValue:(id)value withIndentLevel:(NSInteger)level;
@end
