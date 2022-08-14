#import <Foundation/Foundation.h>

#import <Ably/ARTTypes.h>
#import <Ably/ARTAuthOptions.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * BEGIN CANONICAL DOCSTRING
 * Contains an Ably Token and its associated metadata.
 * END CANONICAL DOCSTRING
 *
 * BEGIN LEGACY DOCSTRING
 * ARTTokenDetails is a type providing details of Ably token string and its associated metadata.
 * END LEGACY DOCSTRING
 */
@interface ARTTokenDetails : NSObject<NSCopying>

/**
 Token string.
 */
@property (nonatomic, readonly, copy) NSString *token;

/**
 Contains the expiry time in milliseconds.
 */
@property (nonatomic, readonly, strong, nullable) NSDate *expires;

/**
 Contains the time the token was issued in milliseconds.
 */
@property (nonatomic, readonly, strong, nullable) NSDate *issued;

/**
 * BEGIN CANONICAL DOCSTRING
 * The capabilities associated with this Ably Token. The capabilities value is a JSON-encoded representation of the resource paths and associated operations. Read more about capabilities in the [capabilities docs](https://ably.com/docs/core-features/authentication/#capabilities-explained).
 * END CANONICAL DOCSTRING
 *
 * BEGIN LEGACY DOCSTRING
 * Contains the capability JSON stringified.
 * END LEGACY DOCSTRING
 */
@property (nonatomic, readonly, copy, nullable) NSString *capability;

/**
 * BEGIN CANONICAL DOCSTRING
 * The client ID, if any, bound to this Ably Token. If a client ID is included, then the Ably Token authenticates its bearer as that client ID, and the Ably Token may only be used to perform operations on behalf of that client ID. The client is then considered to be an [identified client](https://ably.com/docs/core-features/authentication#identified-clients).
 * END CANONICAL DOCSTRING
 *
 * BEGIN LEGACY DOCSTRING
 * Contains the clientId assigned to the token if provided.
 * END LEGACY DOCSTRING
 */
@property (nonatomic, readonly, copy, nullable) NSString *clientId;

- (instancetype)init UNAVAILABLE_ATTRIBUTE;
- (instancetype)initWithToken:(NSString *)token;
- (instancetype)initWithToken:(NSString *)token expires:(nullable NSDate *)expires issued:(nullable  NSDate *)issued capability:(nullable  NSString *)capability clientId:(nullable NSString *)clientId;

/**
 * BEGIN CANONICAL DOCSTRING
 * A static factory method to create a `TokenDetails` object from a deserialized `TokenDetails`-like object or a JSON stringified `TokenDetails` object. This method is provided to minimize bugs as a result of differing types by platform for fields such as `timestamp` or `ttl`. For example, in Ruby `ttl` in the `TokenDetails` object is exposed in seconds as that is idiomatic for the language, yet when serialized to JSON using `to_json` it is automatically converted to the Ably standard which is milliseconds. By using the `fromJson()` method when constructing a `TokenDetails` object, Ably ensures that all fields are consistently serialized and deserialized across platforms.
 *
 * @param json A deserialized `TokenDetails`-like object or a JSON stringified `TokenDetails` object.
 *
 * @return An Ably authentication token.
 * END CANONICAL DOCSTRING
 */
+ (ARTTokenDetails *_Nullable)fromJson:(id<ARTJsonCompatible>)json error:(NSError *_Nullable *_Nullable)error;

@end

@interface ARTTokenDetails (ARTTokenDetailsCompatible) <ARTTokenDetailsCompatible>
@end

NS_ASSUME_NONNULL_END
