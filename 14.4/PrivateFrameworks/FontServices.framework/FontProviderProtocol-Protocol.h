//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;

@protocol FontProviderProtocol
- (void)registeredFontsInfo:(_Bool)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)unregisterFonts:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSDictionary *))arg2;
- (void)registerFonts:(NSArray *)arg1 enabled:(_Bool)arg2 completionHandler:(void (^)(NSArray *, NSDictionary *))arg3;
@end

