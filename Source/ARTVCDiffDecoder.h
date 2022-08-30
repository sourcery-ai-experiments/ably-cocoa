#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * BEGIN CANONICAL DOCSTRING
 * Enables `vcdiff` encoded messages to be decoded.
 * END CANONICAL DOCSTRING
 */
@protocol ARTVCDiffDecoder

/**
 * BEGIN CANONICAL DOCSTRING
 * Decodes `vcdiff` encoded messages.
 *
 * @param delta The delta encoded data.
 * @param base The stored base payload of the last message on a channel.
 * @param errorPtr A reference to the `NSError` object where an error information will be saved in case of failure.
 *
 * @return The decoded data.
 * END CANONICAL DOCSTRING
 */
- (nullable NSData *)decode:(NSData *)delta base:(NSData *)base error:(NSError *__autoreleasing _Nullable * _Nullable)errorPtr;
@end

NS_ASSUME_NONNULL_END
