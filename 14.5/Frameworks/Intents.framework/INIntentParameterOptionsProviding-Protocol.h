//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class INIntent, NSString;

@protocol INIntentParameterOptionsProviding <NSObject>
- (void)getSupportsParameterOptionsForParameterNamed:(NSString *)arg1 intent:(INIntent *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)getParameterOptionsForParameterNamed:(NSString *)arg1 intent:(INIntent *)arg2 searchTerm:(NSString *)arg3 completionBlock:(void (^)(INObjectCollection *, NSError *))arg4;
@end

