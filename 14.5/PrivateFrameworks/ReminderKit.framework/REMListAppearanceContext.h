//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, REMList, REMListBadge;

@interface REMListAppearanceContext : NSObject
{
    REMList *_list;
}

- (void).cxx_destruct;
@property(retain, nonatomic) REMList *list; // @synthesize list=_list;
- (_Bool)showingLargeAttachments;
@property(readonly, nonatomic) NSString *badgeEmblem;
@property(readonly, nonatomic) REMListBadge *badge;
- (id)initWithList:(id)arg1;

@end

