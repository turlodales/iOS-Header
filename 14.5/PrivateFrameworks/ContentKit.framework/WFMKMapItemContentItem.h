//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class CLLocation, MKMapItem;

@interface WFMKMapItemContentItem : WFContentItem <WFContentItemClass>
{
    CLLocation *_queryLocation;
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)itemWithMapItem:(id)arg1 fromQueryLocation:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CLLocation *queryLocation; // @synthesize queryLocation=_queryLocation;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
@property(readonly, nonatomic) MKMapItem *mapItem;
- (_Bool)getListAltText:(CDUnknownBlockType)arg1;
- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;

@end

