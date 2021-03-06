//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface FontProviderManager : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)registeredFontsInfo:(_Bool)arg1;
+ (void)unregisterFonts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)registerFonts:(id)arg1 enabled:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)registeredFontsInfo:(_Bool)arg1;
- (void)_unregisterFonts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_registerFonts:(id)arg1 enabled:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)normalizeURLs:(id)arg1;
- (id)init;

@end

