//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPItemCollection.h>

@interface FPItemCollection (DOCUtils)
- (void)doc_restartObservation;
- (void)doc_startObservationIfNeeded;
@property(readonly) _Bool doc_displaysSearchResults;
- (void)doc_stopObserving;
- (void)doc_startObserving;
@property(readonly, nonatomic) _Bool doc_isObserving;
- (void)doc_setIsObserving:(_Bool)arg1;
@end

