//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CUIPSDLayoutMetricsChannel : NSObject
{
    struct CGRect _edgeInsets;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct CGRect edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void)setEdgeInsets:(struct CGRect)arg1;
- (id)initWithEdgeInsets:(struct CGRect)arg1;
- (void)sanitizeEdgeInsets;
- (void)dealloc;

@end

