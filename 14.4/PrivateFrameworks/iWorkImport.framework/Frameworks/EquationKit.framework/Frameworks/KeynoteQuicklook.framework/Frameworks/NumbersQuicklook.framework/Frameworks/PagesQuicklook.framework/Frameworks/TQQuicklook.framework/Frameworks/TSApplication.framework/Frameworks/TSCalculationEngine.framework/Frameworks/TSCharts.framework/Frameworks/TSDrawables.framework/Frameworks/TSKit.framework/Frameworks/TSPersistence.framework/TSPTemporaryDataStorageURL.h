//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@class TSUTemporaryDirectory;

@interface TSPTemporaryDataStorageURL : NSURL
{
    TSUTemporaryDirectory *_parentDirectory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TSUTemporaryDirectory *parentDirectory; // @synthesize parentDirectory=_parentDirectory;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initFileURLWithPath:(id)arg1 parentDirectory:(id)arg2;

@end

