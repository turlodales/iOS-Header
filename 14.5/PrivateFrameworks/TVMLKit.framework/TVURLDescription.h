//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewDescription.h>

@class NSString;

@interface TVURLDescription : TVViewDescription
{
    _Bool _centerGrowth;
    NSString *_url;
    double _focusSizeIncrease;
    NSString *_cropCode;
    NSString *_urlFormat;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool centerGrowth; // @synthesize centerGrowth=_centerGrowth;
@property(retain, nonatomic) NSString *urlFormat; // @synthesize urlFormat=_urlFormat;
@property(retain, nonatomic) NSString *cropCode; // @synthesize cropCode=_cropCode;
@property(nonatomic) double focusSizeIncrease; // @synthesize focusSizeIncrease=_focusSizeIncrease;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)initUrlWithProperties:(id)arg1 imageSize:(struct CGSize)arg2 focusSizeIncrease:(double)arg3 cropCode:(id)arg4 urlFormat:(id)arg5;

@end

