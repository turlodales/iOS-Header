//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol MLNearestNeighborsIndex
- (unsigned long long)dataPointCount;
- (_Bool)updateWithData:(const vector_7584168e *)arg1 error:(id *)arg2;
- (vector_392775c5)findNearestNeighbors:(unsigned long long)arg1 toQueryPoint:(const vector_7584168e *)arg2;
@end

