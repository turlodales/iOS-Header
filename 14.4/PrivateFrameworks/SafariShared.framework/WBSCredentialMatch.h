//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSFormAutoFillItem.h>

@class NSURLCredential, NSURLProtectionSpace;

@interface WBSCredentialMatch : WBSFormAutoFillItem
{
    NSURLCredential *_credential;
    NSURLProtectionSpace *_protectionSpace;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURLProtectionSpace *protectionSpace; // @synthesize protectionSpace=_protectionSpace;
@property(readonly, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
- (id)completion;
- (id)initWithCredential:(id)arg1 protectionSpace:(id)arg2;
- (id)initWithCredential:(id)arg1;

@end

