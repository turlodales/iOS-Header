//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactFormatter, CNContactStore;

@interface FMFContactUtility : NSObject
{
    CNContactStore *_contactStore;
    CNContactFormatter *_contactFormatter;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)contactKeys;
- (id)findOptimalContactInContacts:(id)arg1;
- (id)getContactForHandle:(id)arg1 keysToFetch:(id)arg2;
- (id)getContactForHandle:(id)arg1;
- (id)displayNameForContact:(id)arg1 andHandle:(id)arg2;
- (id)shortDisplayNameForContact:(id)arg1 andHandle:(id)arg2;

@end

