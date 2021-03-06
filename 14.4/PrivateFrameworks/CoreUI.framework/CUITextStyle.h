//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@class NSString;

@interface CUITextStyle : CUINamedLookup
{
    NSString *_fontName;
    double _fontSize;
    double _maxPointSize;
    double _minPointSize;
    long long _scalingStyle;
    long long _alignment;
}

@property(readonly, nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(readonly, nonatomic) long long scalingStyle; // @synthesize scalingStyle=_scalingStyle;
@property(readonly, nonatomic) double minPointSize; // @synthesize minPointSize=_minPointSize;
@property(readonly, nonatomic) double maxPointSize; // @synthesize maxPointSize=_maxPointSize;
@property(readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (void)dealloc;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end

