//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/NSObject-Protocol.h>

@protocol SGSeekable <NSObject>
@property(readonly) unsigned long long offsetInFile;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (const void *)dataOfLength:(unsigned long long)arg1;
@end

