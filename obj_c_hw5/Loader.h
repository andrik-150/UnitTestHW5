//
//  Loader.h
//  obj_c_hw5
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Loader : NSObject
@property (nonatomic, strong) NSURLSession *session;

- (void) performGETRequestForURL: (NSString *) stringURL
                       arguments: (NSDictionary *) arguments
                       competion: (void(^)(NSDictionary *, NSError *)) complition;
- (void) performPOSTRequestForURL: (NSString *) stringURL
                        arguments: (NSDictionary *) arguments
                        competion: (void(^)(NSDictionary *, NSError *)) complition;
@end

NS_ASSUME_NONNULL_END
