//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface _UIContextMenuActionsListSection : NSObject
{
    NSUUID *_identifier;
    _Bool _isCompact;
    _Bool _prefersSingleLineActions;
}

+ (id)sectionWithMenu:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool prefersSingleLineActions; // @synthesize prefersSingleLineActions=_prefersSingleLineActions;
@property(readonly, nonatomic) _Bool isCompact; // @synthesize isCompact=_isCompact;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

