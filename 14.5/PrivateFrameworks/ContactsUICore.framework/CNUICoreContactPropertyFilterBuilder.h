//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNUICoreContactPropertyFilterBuilder : NSObject
{
    _Bool _excludeNickname;
    _Bool _excludePhoto;
    _Bool _excludeNote;
    _Bool _excludeRelationships;
}

+ (id)whitelistedContactsFilterBuilder;
+ (id)managedContactsFilterBuilder;
@property(nonatomic) _Bool excludeRelationships; // @synthesize excludeRelationships=_excludeRelationships;
@property(nonatomic) _Bool excludeNote; // @synthesize excludeNote=_excludeNote;
@property(nonatomic) _Bool excludePhoto; // @synthesize excludePhoto=_excludePhoto;
@property(nonatomic) _Bool excludeNickname; // @synthesize excludeNickname=_excludeNickname;
- (id)build;

@end

