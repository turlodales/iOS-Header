//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PHAsset;

@interface VCPMovieCurationResults : NSObject
{
    PHAsset *_phAsset;
    NSMutableArray *_highlights;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSMutableArray *highlights; // @synthesize highlights=_highlights;
@property(readonly, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
- (id)initWithPHAsset:(id)arg1;

@end

