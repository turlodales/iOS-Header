//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKPlaceSectionRowView;

__attribute__((visibility("hidden")))
@interface MKPlaceInfoRow : NSObject
{
    _Bool _enable;
    _Bool _showIcon;
    unsigned long long _type;
    MKPlaceSectionRowView *_rowView;
}

+ (id)infoRow:(id)arg1 ofType:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool showIcon; // @synthesize showIcon=_showIcon;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(readonly, nonatomic) MKPlaceSectionRowView *rowView; // @synthesize rowView=_rowView;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

@end

