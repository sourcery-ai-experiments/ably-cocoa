#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Use this pointer as a dictionary value in the `ARTClientOptions.agents` property and the `ARTClientInformation.additionalAgents` method to indicate that an agent does not have a version.
 */
extern NSString *ARTClientInformationAgentNotVersioned;

@interface ARTClientInformation : NSObject

- (instancetype)init NS_UNAVAILABLE;

@property (class, readonly) NSDictionary<NSString *, NSString *> *agents;
+ (NSString *)agentIdentifierWithAdditionalAgents:(nullable NSDictionary<NSString *, NSString *> *)additionalAgents;

@end

NS_ASSUME_NONNULL_END
