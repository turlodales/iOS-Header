//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore;

@interface SPCoreSpotlightInteractionHandler : NSObject
{
    CNContactStore *_contactStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void)handleInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (id)attributeForIntent:(id)arg1 direction:(long long)arg2;
- (id)interestingContactIdentifiersFromIntent:(id)arg1;

@end

