//
//  ARTDataQuery+Private.h
//  ably
//
//  Created by Yavor Georgiev on 20.08.15.
//  Copyright (c) 2015 г. Ably. All rights reserved.
//

#import "ARTDataQuery.h"
#import "ARTRealtimeChannel+Private.h"

NS_ASSUME_NONNULL_BEGIN

@interface ARTDataQuery(Private)

- (NSMutableArray /* <NSURLQueryItem *> */ *)asQueryItems:(NSError *_Nullable *)error;

@end

@interface ARTRealtimeHistoryQuery ()

@property (strong, readwrite) ARTRealtimeChannelInternal *realtimeChannel;

@end

NS_ASSUME_NONNULL_END