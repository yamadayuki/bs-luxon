type t;

type dt = {
  .
  "years": int,
  "months": int,
  "weeks": int,
  "days": int,
  "hours": int,
  "minutes": int,
  "seconds": int,
  "milliseconds": int
};

/*
 * Static public methods
 */
/* TODO: option */
/* fromISO */
[@bs.module "luxon"] [@bs.scope "Duration"]
external fromISO : string => t = "";

/* TODO: option */
/* fromMills */
[@bs.module "luxon"] [@bs.scope "Duration"] external fromMills : int => t = "";

/* fromObject */
[@bs.module "luxon"] [@bs.scope "Duration"]
external fromObject : Js.t('a) => t = "";

/* invalid */
[@bs.module "luxon"] [@bs.scope "Duration"]
external invalid : string => t = "";

/*
 * Public members
 */
[@bs.get] external days : t => int = "";

[@bs.get] external hours : t => int = "";

[@bs.get] external invalidReason : t => string = "";

[@bs.get] external isValid : t => bool = "";

[@bs.get] external locale : t => string = "";

[@bs.get] external milliseconds : t => int = "";

[@bs.get] external minutes : t => int = "";

[@bs.get] external months : t => int = "";

[@bs.get] external numberingSystem : t => string = "";

[@bs.get] external seconds : t => int = "";

[@bs.get] external weeks : t => int = "";

[@bs.get] external years : t => int = "";

/*
 * Public methods
 */
[@bs.send.pipe : t]
external as_ :
  (
  [@bs.string]
  [ | `years | `months | `days | `hours | `minutes | `seconds | `milliseconds]
  ) =>
  int =
  "as";

[@bs.send.pipe : t] external equals : t => bool = "";

[@bs.send.pipe : t]
external get :
  (
  [@bs.string]
  [ | `years | `months | `days | `hours | `minutes | `seconds | `milliseconds]
  ) =>
  int =
  "";

[@bs.send] external inspect : t => string = "";

[@bs.send.pipe : t] external minus : t => t = "";

[@bs.send] external negate : unit => t = "";

[@bs.send] external normalize : unit => t = "";

[@bs.send.pipe : t] external plus : t => t = "";

/* TODO: reconfigure */
/* TODO: set */
/* TODO: shiftTo */
/* TODO: option */
[@bs.send.pipe : t] external toFormat : string => string = "";

[@bs.send] external toISO : t => string = "";

[@bs.send] external toJSON : t => string = "";

/* TODO: option */
[@bs.send] external toObject : t => dt = "";

[@bs.send] external toString : t => string = "";
