//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface _CNContactVCardNameSummzarizationScope : NSObject
{
    CNContact *_contact;
    NSString *_fullName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)initWithContact:(id)arg1 fullName:(id)arg2;

@end

