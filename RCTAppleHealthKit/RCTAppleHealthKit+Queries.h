//
//  RCTAppleHealthKit+Queries.h
//  RCTAppleHealthKit
//
//  Created by Greg Wilson on 2016-06-26.
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import "RCTAppleHealthKit.h"

@interface RCTAppleHealthKit (Queries)

- (void)fetchAverageSampleOfType:(HKQuantityType *)quantityType predicate:(NSPredicate *)predicate completion:(void (^)(HKQuantity *mostRecentQuantity, NSDate *startDate, NSDate *endDate, NSError *error))completion;
- (void)fetchMostRecentQuantitySampleOfType:(HKQuantityType *)quantityType predicate:(NSPredicate *)predicate completion:(void (^)(HKQuantity *mostRecentQuantity, NSDate *startDate, NSDate *endDate, NSError *error))completion;
- (void)fetchSumOfSamplesTodayForType:(HKQuantityType *)quantityType unit:(HKUnit *)unit completion:(void (^)(double, NSError *))completionHandler;
- (void)fetchSumOfSamplesOnDayForType:(HKQuantityType *)quantityType unit:(HKUnit *)unit day:(NSDate *)day completion:(void (^)(double, NSDate *, NSDate *, NSError *))completionHandler;
- (void)fetchSumOfSamplesBetweenDates:(HKQuantityType *)quantityType unit:(HKUnit *)unit startDate:(NSDate *)startDate endDate:(NSDate *)endDate completion:(void (^)(double, NSDate *, NSDate *, NSError *))completionHandler;


// hourly
- (void)fetchHourlyCumulativeSumStatisticsCollection:(HKQuantityType *)quantityType
                                      unit:(HKUnit *)unit
                                 startDate:(NSDate *)startDate
                                   endDate:(NSDate *)endDate
                                completion:(void (^)(NSArray *, NSError *))completionHandler;
- (void)fetchHourlyCumulativeSumStatisticsCollection:(HKQuantityType *)quantityType
                                          unit:(HKUnit *)unit
                                     startDate:(NSDate *)startDate
                                       endDate:(NSDate *)endDate
                                     ascending:(BOOL)asc
                                         limit:(NSUInteger)lim
                                    completion:(void (^)(NSArray *, NSError *))completionHandler;
- (void)fetchHourlyAverageStatisticsCollection:(HKQuantityType *)quantityType
                                                unit:(HKUnit *)unit
                                           startDate:(NSDate *)startDate
                                             endDate:(NSDate *)endDate
                                           ascending:(BOOL)asc
                                               limit:(NSUInteger)lim
                                          completion:(void (^)(NSArray *, NSError *))completionHandler;

// daily
- (void)fetchCumulativeSumStatisticsCollection:(HKQuantityType *)quantityType
                                          unit:(HKUnit *)unit
                                     startDate:(NSDate *)startDate
                                       endDate:(NSDate *)endDate
                                    completion:(void (^)(NSArray *, NSError *))completionHandler;
- (void)fetchCumulativeSumStatisticsCollection:(HKQuantityType *)quantityType
                                          unit:(HKUnit *)unit
                                     startDate:(NSDate *)startDate
                                       endDate:(NSDate *)endDate
                                     ascending:(BOOL)asc
                                         limit:(NSUInteger)lim
                                    completion:(void (^)(NSArray *, NSError *))completionHandler;
- (void)fetchAverageStatisticsCollection:(HKQuantityType *)quantityType
                                          unit:(HKUnit *)unit
                                     startDate:(NSDate *)startDate
                                       endDate:(NSDate *)endDate
                                     ascending:(BOOL)asc
                                         limit:(NSUInteger)lim
                                    completion:(void (^)(NSArray *, NSError *))completionHandler;



// weekly
- (void)fetchWeeklyCumulativeSumStatisticsCollection:(HKQuantityType *)quantityType
                                           unit:(HKUnit *)unit
                                      startDate:(NSDate *)startDate
                                        endDate:(NSDate *)endDate
                                     completion:(void (^)(NSArray *, NSError *))completionHandler;
- (void)fetchWeeklyCumulativeSumStatisticsCollection:(HKQuantityType *)quantityType
                                           unit:(HKUnit *)unit
                                      startDate:(NSDate *)startDate
                                        endDate:(NSDate *)endDate
                                      ascending:(BOOL)asc
                                          limit:(NSUInteger)lim
                                     completion:(void (^)(NSArray *, NSError *))completionHandler;
- (void)fetchWeeklyAverageStatisticsCollection:(HKQuantityType *)quantityType
                                           unit:(HKUnit *)unit
                                      startDate:(NSDate *)startDate
                                        endDate:(NSDate *)endDate
                                      ascending:(BOOL)asc
                                          limit:(NSUInteger)lim
                                     completion:(void (^)(NSArray *, NSError *))completionHandler;




// monthly
- (void)fetchMonthlyCumulativeSumStatisticsCollection:(HKQuantityType *)quantityType
                                                unit:(HKUnit *)unit
                                           startDate:(NSDate *)startDate
                                             endDate:(NSDate *)endDate
                                          completion:(void (^)(NSArray *, NSError *))completionHandler;
- (void)fetchMonthlyCumulativeSumStatisticsCollection:(HKQuantityType *)quantityType
                                                unit:(HKUnit *)unit
                                           startDate:(NSDate *)startDate
                                             endDate:(NSDate *)endDate
                                           ascending:(BOOL)asc
                                               limit:(NSUInteger)lim
                                          completion:(void (^)(NSArray *, NSError *))completionHandler;


- (void)fetchMonthlyAverageStatisticsCollection:(HKQuantityType *)quantityType
                                                 unit:(HKUnit *)unit
                                            startDate:(NSDate *)startDate
                                              endDate:(NSDate *)endDate
                                            ascending:(BOOL)asc
                                                limit:(NSUInteger)lim
                                           completion:(void (^)(NSArray *, NSError *))completionHandler;



- (void)fetchSamplesOfType:(HKSampleType *)quantityType
                              unit:(HKUnit *)unit
                         predicate:(NSPredicate *)predicate
                         ascending:(BOOL)asc
                             limit:(NSUInteger)lim
                        completion:(void (^)(NSArray *, NSError *))completion;
- (void)setObserverForType:(HKSampleType *)quantityType
                      unit:(HKUnit *)unit;


- (void)fetchQuantitySamplesOfType:(HKQuantityType *)quantityType
                              unit:(HKUnit *)unit
                         predicate:(NSPredicate *)predicate
                         ascending:(BOOL)asc
                             limit:(NSUInteger)lim
                        completion:(void (^)(NSArray *, NSError *))completion;
- (void)fetchCorrelationSamplesOfType:(HKQuantityType *)quantityType
                                 unit:(HKUnit *)unit
                            predicate:(NSPredicate *)predicate
                            ascending:(BOOL)asc
                                limit:(NSUInteger)lim
                           completion:(void (^)(NSArray *, NSError *))completion;




- (void)fetchSleepCategorySamplesForPredicate:(NSPredicate *)predicate
                                   limit:(NSUInteger)lim
                                   completion:(void (^)(NSArray *, NSError *))completion;

@end
