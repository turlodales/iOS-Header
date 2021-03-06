//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface PSOAuthAccountRedirectURLController : NSObject
{
    NSMapTable *_redirectHandlerMap;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *redirectHandlerMap; // @synthesize redirectHandlerMap=_redirectHandlerMap;
- (id)_redirectURLFromURL:(id)arg1;
- (_Bool)handleOAuthRedirectURL:(id)arg1;
- (void)unRegisterOAuthClientForRedirectURL:(id)arg1;
- (void)registerOAuthClientForRedirectURL:(id)arg1 redirectHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

