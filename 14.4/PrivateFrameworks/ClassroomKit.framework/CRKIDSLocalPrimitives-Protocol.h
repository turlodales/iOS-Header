//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString;
@protocol CRKIDSAccount, CRKIDSListener;

@protocol CRKIDSLocalPrimitives
@property(readonly, copy, nonatomic) NSDictionary *debugInfo;
- (id <CRKIDSListener>)listenForAccountAdditionsWithHandler:(void (^)(id <CRKIDSAccount>))arg1;
- (id <CRKIDSListener>)listenForMessageReceivesWithHandler:(void (^)(NSDictionary *, NSString *, NSString *))arg1;
- (id <CRKIDSListener>)listenForMessageSendsWithHandler:(void (^)(NSString *, _Bool, NSError *))arg1;
- (_Bool)sendMessage:(NSDictionary *)arg1 toDestinationAddress:(NSString *)arg2 identifier:(id *)arg3 error:(id *)arg4;
- (id <CRKIDSAccount>)accountForSourceAppleID:(NSString *)arg1;
@end

