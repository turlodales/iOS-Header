//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFoundation/NFCallbackRegistration-Protocol.h>

@class NSString, Protocol;

@protocol NFContext <NFCallbackRegistration>
- (void)useObject:(id)arg1 forProtocol:(Protocol *)arg2 name:(NSString *)arg3;
- (void)useObject:(id)arg1 forProtocol:(Protocol *)arg2;
- (void)useObject:(id)arg1 forClass:(Class)arg2 name:(NSString *)arg3;
- (void)useObject:(id)arg1 forClass:(Class)arg2;
@end

